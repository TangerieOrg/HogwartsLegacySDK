#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMovieSceneTrack;
#pragma pack(push, 1)
class UMovieSceneFolder : public UObject {
public:
    FName FolderName; // 0x28
    TArray<UMovieSceneFolder*> ChildFolders; // 0x30
    TArray<UMovieSceneTrack*> ChildMasterTracks; // 0x40
    TArray<FString> ChildObjectBindingStrings; // 0x50
    char pad_60[0x10];
    static UMovieSceneFolder* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
