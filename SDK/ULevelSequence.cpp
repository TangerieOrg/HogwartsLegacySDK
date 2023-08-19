#include "FLevelSequenceBindingReferences.hpp"
#include "FLevelSequenceObjectReferenceMap.hpp"
#include "UAssetUserData.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "ULevelSequence.hpp"
#include "UMovieScene.hpp"
#include "UMovieSceneSequence.hpp"
#include "UObject.hpp"
void ULevelSequence::RemoveMetaDataByClass(UClass* InClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequence.RemoveMetaDataByClass"));
    struct Params_RemoveMetaDataByClass {
        UClass* InClass; // 0x0
    }; // Size: 0x8
    Params_RemoveMetaDataByClass params{};
    params.InClass = (UClass*)InClass;
    ProcessEvent(func, &params);
}
ULevelSequence* ULevelSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/LevelSequence.LevelSequence");
    return (ULevelSequence*)res;
}
UObject* ULevelSequence::FindOrAddMetaDataByClass(UClass* InClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequence.FindOrAddMetaDataByClass"));
    struct Params_FindOrAddMetaDataByClass {
        UClass* InClass; // 0x0
        UObject* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FindOrAddMetaDataByClass params{};
    params.InClass = (UClass*)InClass;
    ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
UObject* ULevelSequence::FindMetaDataByClass(UClass* InClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequence.FindMetaDataByClass"));
    struct Params_FindMetaDataByClass {
        UClass* InClass; // 0x0
        UObject* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FindMetaDataByClass params{};
    params.InClass = (UClass*)InClass;
    ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
UObject* ULevelSequence::CopyMetaData(UObject* InMetaData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequence.CopyMetaData"));
    struct Params_CopyMetaData {
        UObject* InMetaData; // 0x0
        UObject* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CopyMetaData params{};
    params.InMetaData = (UObject*)InMetaData;
    ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
