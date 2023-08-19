#include "UBlueprint.hpp"
#include "ULegacyLevelSequenceDirectorBlueprint.hpp"
ULegacyLevelSequenceDirectorBlueprint* ULegacyLevelSequenceDirectorBlueprint::StaticClass() {
    static auto res = find_uobject("Class /Script/LevelSequence.LegacyLevelSequenceDirectorBlueprint");
    return (ULegacyLevelSequenceDirectorBlueprint*)res;
}
