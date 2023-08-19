#include "EUpdateClockSource.hpp"
#include "UDeveloperSettings.hpp"
#include "ULevelSequenceProjectSettings.hpp"
ULevelSequenceProjectSettings* ULevelSequenceProjectSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/LevelSequence.LevelSequenceProjectSettings");
    return (ULevelSequenceProjectSettings*)res;
}
