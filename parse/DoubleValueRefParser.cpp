#include "ValueRefParserImpl.h"


parse::detail::simple_double_parser_rules::simple_double_parser_rules(const parse::lexer& tok) :
    simple_variable_rules("double")
{
    namespace phoenix = boost::phoenix;
    namespace qi = boost::spirit::qi;

    using phoenix::new_;

    qi::_1_type _1;
    qi::_val_type _val;

    bound_variable_name
        =   tok.Industry_
        |   tok.TargetIndustry_
        |   tok.Research_
        |   tok.TargetResearch_
        |   tok.Trade_
        |   tok.TargetTrade_
        |   tok.Construction_
        |   tok.TargetConstruction_
        |   tok.Population_
        |   tok.TargetPopulation_
        |   tok.TargetHappiness_
        |   tok.Happiness_
        |   tok.MaxFuel_
        |   tok.Fuel_
        |   tok.MaxShield_
        |   tok.Shield_
        |   tok.MaxDefense_
        |   tok.Defense_
        |   tok.MaxTroops_
        |   tok.Troops_
        |   tok.RebelTroops_
        |   tok.MaxStructure_
        |   tok.Structure_
        |   tok.Supply_
        |   tok.Stealth_
        |   tok.Detection_
        |   tok.Speed_
        |   tok.TradeStockpile_
        |   tok.X_
        |   tok.Y_
        |   tok.SizeAsDouble_
        |   tok.NextTurnPopGrowth_
        |   tok.Size_
        |   tok.DistanceFromOriginalType_
        |   tok.Attack_
        |   tok.PropagatedSupplyRange_
        ;

    free_variable_name
        =   tok.UniverseCentreX_
        |   tok.UniverseCentreY_
        |   tok.UniverseWidth_
        ;

    constant
        =   tok.double_ [ _val = new_<ValueRef::Constant<double>>(_1) ]
        ;
}

parse::double_parser_rules::double_parser_rules(
    const parse::lexer& tok,
    parse::detail::Labeller& labeller,
    const parse::detail::condition_parser_grammar& condition_parser,
    const parse::value_ref_grammar<std::string>& string_grammar
) :
    arithmetic_rules("real number", tok, labeller, condition_parser),
    int_rules(tok, labeller, condition_parser, string_grammar),
    simple_int_rules(tok),
    simple_double_rules(tok),
    int_complex_grammar(tok, labeller, int_rules, string_grammar),
    double_complex_grammar(tok, labeller, condition_parser, string_grammar)
{
    namespace phoenix = boost::phoenix;
    namespace qi = boost::spirit::qi;

    using phoenix::new_;
    using phoenix::static_cast_;

    qi::_1_type _1;
    qi::_val_type _val;

    const parse::value_ref_rule<double>& simple = simple_double_rules.simple;

    int_constant_cast
        =   tok.int_ [ _val = new_<ValueRef::Constant<double>>(static_cast_<double>(_1)) ]
        ;

    int_bound_variable_cast
        =   simple_int_rules.bound_variable [ _val = new_<ValueRef::StaticCast<int, double>>(_1) ]
        ;

    int_free_variable_cast
        =   simple_int_rules.free_variable [ _val = new_<ValueRef::StaticCast<int, double>>(_1) ]
        ;

    int_statistic_cast
        =   int_rules.statistic_expr [ _val = new_<ValueRef::StaticCast<int, double>>(_1) ]
        ;

    int_complex_variable_cast
        =   int_complex_grammar [ _val = new_<ValueRef::StaticCast<int, double>>(_1) ]
        ;

    statistic_value_ref_expr
        = primary_expr.alias();

    primary_expr
        =   ('(' > expr > ')')
        |    simple
        |    statistic_expr
        |    int_statistic_cast
        |    double_complex_grammar
        |    int_constant_cast
        |    int_free_variable_cast
        |    int_bound_variable_cast
        |    int_complex_variable_cast
        ;

    int_free_variable_cast.name("integer free variable");
    int_bound_variable_cast.name("integer bound variable");
    int_statistic_cast.name("integer statistic");
    int_complex_variable_cast.name("integer complex variable");

#if DEBUG_VALUEREF_PARSERS
    debug(int_constant_cast);
    debug(int_free_variable_cast);
    debug(int_bound_variable_cast);
    debug(int_statistic_cast);
    debug(int_complex_variable_cast);
    debug(double_complex_variable);
#endif
}
