#include "FAITeamStimulusEvent.hpp"
#include "UAISense.hpp"
#include "UAISense_Team.hpp"
UAISense_Team* UAISense_Team::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISense_Team");
    return (UAISense_Team*)res;
}
