// -*- C++ -*-
#ifndef _Names_h_
#define _Names_h_

#include <GG/adobe/name.hpp>

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/seq/for_each.hpp>


#define NAMES_SEQ_1                             \
    (Abs)                                       \
    (AccountingLabel)                           \
    (Activation)                                \
    (AddedBefore)                               \
    (AddedSince)                                \
    (AddSpecial)                                \
    (AddStarlanes)                              \
    (Adequate)                                  \
    (Affiliation)                               \
    (Age)                                       \
    (Alignment)                                 \
    (AlignmentEffects)                          \
    (All)                                       \
    (AllyOf)                                    \
    (And)                                       \
    (AntiFighterDamage)                         \
    (AntiShipDamage)                            \
    (AnyEmpire)                                 \
    (Armed)                                     \
    (Armour)                                    \
    (Article)                                   \
    (Application)                               \
    (Asteroids)                                 \
    (Barren)                                    \
    (BattleSpeed)                               \
    (BlackHole)                                 \
    (Blue)                                      \
    (Bomber)                                    \
    (BuildCost)                                 \
    (Building)                                  \
    (BuildingType)                              \
    (BuildTime)                                 \
    (CanColonize)                               \
    (CanProduceShips)                           \
    (Capacity)                                  \
    (Capital)                                   \
    (Capture)                                   \
    (CaptureResult)                             \
    (Category)                                  \
    (Class)                                     \
    (ClockwiseNextPlanetType)                   \
    (Colony)                                    \
    (Colour)                                    \
    (Condition)                                 \
    (Construction)                              \
    (ContainedBy)                               \
    (Contains)                                  \
    (Cos)                                       \
    (Count)                                     \
    (CountUnique)                               \
    (CounterClockwiseNextPlanetType)            \
    (CreateBuilding)                            \
    (CreatedOnTurn)                             \
    (CreateField)                               \
    (CreatePlanet)                              \
    (CreateShip)                                \
    (CreationTurn)                              \
    (CurrentTurn)                               \
    (Damage)                                    \
    (Data)                                      \
    (Defense)                                   \
    (Description)                               \
    (Desert)                                    \
    (Design)                                    \
    (DesignHasHull)                             \
    (DesignHasPart)                             \
    (DesignHasPartClass)                        \
    (DesignID)                                  \
    (DesignName)                                \
    (Destination)                               \
    (Destroy)                                   \
    (Detection)                                 \
    (Distance)                                  \
    (DistanceToSource)                          \
    (DistanceFromOriginalType)                  \
    (Effects)                                   \
    (EffectsGroup)                              \
    (EffectsGroups)                             \
    (Empire)                                    \
    (EmpireMeter)                               \
    (Endpoint)                                  \
    (EnemyOf)                                   \
    (Enqueued)                                  \
    (Environment)                               \
    (Environments)                              \
    (ExploredByEmpire)                          \
    (External)

#define NAMES_SEQ_2                             \
    (FieldType)                                 \
    (Fighters)                                  \
    (FighterType)                               \
    (FighterWeaponRange)                        \
    (FinalDestinationID)                        \
    (Fleet)                                     \
    (FleetID)                                   \
    (FleetSupplyableByEmpire)                   \
    (Foci)                                      \
    (Focus)                                     \
    (FocusType)                                 \
    (Fuel)                                      \
    (GasGiant)                                  \
    (GenerateSitrepMessage)                     \
    (GiveEmpireTech)                            \
    (Good)                                      \
    (Graphic)                                   \
    (Happiness)                                 \
    (HasSpecial)                                \
    (HasSpecialSinceTurn)                       \
    (HasTag)                                    \
    (High)                                      \
    (Homeworld)                                 \
    (Hostile)                                   \
    (Huge)                                      \
    (Hull)                                      \
    (Icon)                                      \
    (ID)                                        \
    (If)                                        \
    (Industry)                                  \
    (Inferno)                                   \
    (InSystem)                                  \
    (Interceptor)                               \
    (Internal)                                  \
    (Item)                                      \
    (Jumps)                                     \
    (Keymap)                                    \
    (Keys)                                      \
    (Label)                                     \
    (Large)                                     \
    (LastTurnBattleHere)                        \
    (LaunchRate)                                \
    (LocalCandidate)                            \
    (Location)                                  \
    (Log)                                       \
    (Low)                                       \
    (Max)                                       \
    (MaxDefense)                                \
    (MaxFuel)                                   \
    (MaximumNumberOf)                           \
    (MaxShield)                                 \
    (MaxStructure)                              \
    (MaxTroops)                                 \
    (Mean)                                      \
    (Medium)                                    \
    (Message)                                   \
    (Meter)                                     \
    (Min)                                       \
    (MinimumNumberOf)                           \
    (Missiles)                                  \
    (Mode)                                      \
    (Model)                                     \
    (ModeNumberOf)                              \
    (Monster)                                   \
    (MonsterFleet)                              \
    (MountableSlotTypes)                        \
    (MoveInOrbit)                               \
    (MoveTo)                                    \
    (MoveTowards)

#define NAMES_SEQ_3                             \
    (Name)                                      \
    (Native)                                    \
    (Neutron)                                   \
    (NextBetterPlanetType)                      \
    (NextLargerPlanetSize)                      \
    (NextSmallerPlanetSize)                     \
    (NextOlderStarType)                         \
    (NextSystemID)                              \
    (NextTurnPopGrowth)                         \
    (NextYoungerStarType)                       \
    (NoStar)                                    \
    (Not)                                       \
    (Number)                                    \
    (NumberOf)                                  \
    (NumShips)                                  \
    (Object)                                    \
    (ObjectType)                                \
    (Ocean)                                     \
    (Or)                                        \
    (Orange)                                    \
    (Orbit)                                     \
    (OriginalType)                              \
    (OwnedBy)                                   \
    (Owner)                                     \
    (OwnerHasTech)                              \
    (OwnerTradeStockpile)                       \
    (Parameters)                                \
    (Part)                                      \
    (PartClass)                                 \
    (PartName)                                  \
    (Parts)                                     \
    (Planet)                                    \
    (Planetbound)                               \
    (PlanetEnvironment)                         \
    (PlanetID)                                  \
    (PlanetSize)                                \
    (PlanetType)                                \
    (Playable)                                  \
    (PointDefense)                              \
    (Poor)                                      \
    (Population)                                \
    (PopulationCenter)                          \
    (Position)                                  \
    (Prerequisites)                             \
    (PreviousSystemID)                          \
    (Probability)                               \
    (ProducedByEmpire)                          \
    (ProducedByEmpireID)                        \
    (Producible)                                \
    (Product)                                   \
    (ProductionCenter)                          \
    (Progress)                                  \
    (Property)                                  \
    (Radiated)                                  \
    (Radius)                                    \
    (Random)                                    \
    (Range)                                     \
    (Reason)                                    \
    (RebelTroops)                               \
    (Red)                                       \
    (Refinement)                                \
    (RemoveSpecial)                             \
    (RemoveStarlanes)                           \
    (Research)                                  \
    (Researchable)                              \
    (ResearchCost)                              \
    (ResearchTurns)                             \
    (ResourceSupplyConnected)                   \
    (ResupplyableBy)                            \
    (Retain)                                    \
    (RMS)                                       \
    (ROF)                                       \
    (RootCandidate)

#define NAMES_SEQ_4                             \
    (Scope)                                     \
    (SetAggressive)                             \
    (SetAntiFighterDamage)                      \
    (SetAntiShipDamage)                         \
    (SetBattleSpeed)                            \
    (SetCapacity)                               \
    (SetConstruction)                           \
    (SetDamage)                                 \
    (SetDefense)                                \
    (SetDestination)                            \
    (SetDetection)                              \
    (SetEmpireCapital)                          \
    (SetEmpireMeter)                            \
    (SetEmpireTechProgress)                     \
    (SetEmpireTradeStockpile)                   \
    (SetFighterWeaponRange)                     \
    (SetFuel)                                   \
    (SetHappiness)                              \
    (SetIndustry)                               \
    (SetLaunchRate)                             \
    (SetMaxDefense)                             \
    (SetMaxFuel)                                \
    (SetMaxShield)                              \
    (SetMaxStructure)                           \
    (SetMaxTroops)                              \
    (SetOverlayTexture)                         \
    (SetOwner)                                  \
    (SetPassive)                                \
    (SetPlanetSize)                             \
    (SetPlanetType)                             \
    (SetPopulation)                             \
    (SetRange)                                  \
    (SetRebelTroops)                            \
    (SetResearch)                               \
    (SetROF)                                    \
    (SetShield)                                 \
    (SetSize)                                   \
    (SetSpecies)                                \
    (SetSpeed)                                  \
    (SetStarlaneSpeed)                          \
    (SetStarType)                               \
    (SetStealth)                                \
    (SetStructure)                              \
    (SetSupply)                                 \
    (SetTargetConstruction)                     \
    (SetTargetHappiness)                        \
    (SetTargetIndustry)                         \
    (SetTargetPopulation)                       \
    (SetTargetResearch)                         \
    (SetTargetTrade)                            \
    (SetTexture)                                \
    (SetTrade)                                  \
    (SetTroops)                                 \
    (Shield)                                    \
    (ShipDesign)                                \
    (Ship)                                      \
    (ShipHull)                                  \
    (ShipPart)                                  \
    (ShipPartMeter)                             \
    (Ships)                                     \
    (Short_Description)                         \
    (ShortRange)                                \
    (Sin)                                       \
    (Size)                                      \
    (SizeAsDouble)                              \
    (Slot)                                      \
    (Slots)                                     \
    (SlotType)                                  \
    (Small)                                     \
    (SortBy)                                    \
    (SortKey)                                   \
    (Source)                                    \
    (Spacebound)                                \
    (SpawnLimit)                                \
    (SpawnRate)                                 \
    (Special)                                   \
    (Species)                                   \
    (Speed)                                     \
    (Spread)                                    \
    (StackingGroup)                             \
    (Star)                                      \
    (StarlaneSpeed)                             \
    (StarType)                                  \
    (Stationary)                                \
    (StDev)                                     \
    (Stealth)                                   \
    (Structure)                                 \
    (Sum)                                       \
    (Supply)                                    \
    (Swamp)                                     \
    (System)                                    \
    (SystemID)                                  \
    (Tag)                                       \
    (Tags)                                      \
    (Target)                                    \
    (TargetConstruction)                        \
    (TargetHappiness)                           \
    (TargetIndustry)                            \
    (TargetPopulation)                          \
    (TargetResearch)                            \
    (TargetTrade)                               \
    (Tech)                                      \
    (TechType)                                  \
    (Terran)                                    \
    (TheEmpire)                                 \
    (Theory)                                    \
    (Tiny)                                      \
    (Toxic)                                     \
    (Trade)                                     \
    (TradeStockpile)                            \
    (Troops)                                    \
    (Tundra)                                    \
    (Turn)                                      \
    (Type)                                      \
    (Uninhabitable)                             \
    (UniverseCentreX)                           \
    (UniverseCentreY)                           \
    (Unlock)                                    \
    (Unproducible)                              \
    (Unresearchable)                            \
    (Value)                                     \
    (Victory)                                   \
    (VisibleToEmpire)                           \
    (White)                                     \
    (WithinDistance)                            \
    (WithinStarlaneJumps)                       \
    (X)                                         \
    (Y)                                         \
    (Yellow)

#define DECLARE_NAME(r, _, elem) extern adobe::aggregate_name_t BOOST_PP_CAT(elem, _name);
BOOST_PP_SEQ_FOR_EACH(DECLARE_NAME, _, NAMES_SEQ_1)
BOOST_PP_SEQ_FOR_EACH(DECLARE_NAME, _, NAMES_SEQ_2)
BOOST_PP_SEQ_FOR_EACH(DECLARE_NAME, _, NAMES_SEQ_3)
BOOST_PP_SEQ_FOR_EACH(DECLARE_NAME, _, NAMES_SEQ_4)
#undef DECLARE_NAME

#endif
