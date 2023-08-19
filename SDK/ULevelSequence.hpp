#pragma once
#include <cstdint>
#include "FLevelSequenceBindingReferences.hpp"
#include "FLevelSequenceObjectReferenceMap.hpp"
#include "UMovieSceneSequence.hpp"
class UMovieScene;
class UClass;
class UAssetUserData;
class UObject;
#pragma pack(push, 1)
class ULevelSequence : public UMovieSceneSequence {
public:
    char pad_60[0x8];
    UMovieScene* MovieScene; // 0x68
    FLevelSequenceObjectReferenceMap ObjectReferences; // 0x70
    FLevelSequenceBindingReferences BindingReferences; // 0xc0
    char pad_160[0x50];
    UClass* DirectorClass; // 0x1b0
    TArray<UAssetUserData*> AssetUserData; // 0x1b8
    static ULevelSequence* StaticClass();
    void RemoveMetaDataByClass(UClass* InClass);
    UObject* FindOrAddMetaDataByClass(UClass* InClass);
    UObject* FindMetaDataByClass(UClass* InClass);
    UObject* CopyMetaData(UObject* InMetaData);
}; // Size: 0x1c8
#pragma pack(pop)
