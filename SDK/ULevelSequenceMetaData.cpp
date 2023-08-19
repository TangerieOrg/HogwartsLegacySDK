#include "UInterface.hpp"
#include "ULevelSequenceMetaData.hpp"
ULevelSequenceMetaData* ULevelSequenceMetaData::StaticClass() {
    static auto res = find_uobject("Class /Script/LevelSequence.LevelSequenceMetaData");
    return (ULevelSequenceMetaData*)res;
}
