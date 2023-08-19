#include "FGuid.hpp"
#include "FSoftObjectPath.hpp"
#include "UAnimSequenceLevelSequenceLink.hpp"
#include "UAssetUserData.hpp"
UAnimSequenceLevelSequenceLink* UAnimSequenceLevelSequenceLink::StaticClass() {
    static auto res = find_uobject("Class /Script/LevelSequence.AnimSequenceLevelSequenceLink");
    return (UAnimSequenceLevelSequenceLink*)res;
}
