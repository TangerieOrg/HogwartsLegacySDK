#include "AActor.hpp"
#include "FTransform.hpp"
#include "UDefaultLevelSequenceInstanceData.hpp"
#include "UObject.hpp"
UDefaultLevelSequenceInstanceData* UDefaultLevelSequenceInstanceData::StaticClass() {
    static auto res = find_uobject("Class /Script/LevelSequence.DefaultLevelSequenceInstanceData");
    return (UDefaultLevelSequenceInstanceData*)res;
}
