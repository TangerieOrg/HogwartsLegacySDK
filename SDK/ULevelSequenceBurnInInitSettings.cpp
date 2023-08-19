#include "ULevelSequenceBurnInInitSettings.hpp"
#include "UObject.hpp"
ULevelSequenceBurnInInitSettings* ULevelSequenceBurnInInitSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/LevelSequence.LevelSequenceBurnInInitSettings");
    return (ULevelSequenceBurnInInitSettings*)res;
}
