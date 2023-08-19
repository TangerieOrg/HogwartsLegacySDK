#include "FLevelSequenceAnimSequenceLinkItem.hpp"
#include "UAssetUserData.hpp"
#include "ULevelSequenceAnimSequenceLink.hpp"
ULevelSequenceAnimSequenceLink* ULevelSequenceAnimSequenceLink::StaticClass() {
    static auto res = find_uobject("Class /Script/LevelSequence.LevelSequenceAnimSequenceLink");
    return (ULevelSequenceAnimSequenceLink*)res;
}
