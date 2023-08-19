#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FSequencerBindingProxy.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UMovieSceneFolder;
class UMovieSceneTrack;
#pragma pack(push, 1)
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary {
public:
    static UMovieSceneFolderExtensions* StaticClass();
    static bool SetFolderName(UMovieSceneFolder* Folder, FName InFolderName);
    static bool SetFolderColor(UMovieSceneFolder* Folder, FColor InFolderColor);
    static bool RemoveChildObjectBinding(UMovieSceneFolder* Folder, FSequencerBindingProxy InObjectBinding);
    static bool RemoveChildMasterTrack(UMovieSceneFolder* Folder, UMovieSceneTrack* InMasterTrack);
    static bool RemoveChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToRemove);
    static FName GetFolderName(UMovieSceneFolder* Folder);
    static FColor GetFolderColor(UMovieSceneFolder* Folder);
    static TArray<FSequencerBindingProxy> GetChildObjectBindings(UMovieSceneFolder* Folder);
    static TArray<UMovieSceneTrack*> GetChildMasterTracks(UMovieSceneFolder* Folder);
    static TArray<UMovieSceneFolder*> GetChildFolders(UMovieSceneFolder* Folder);
    static bool AddChildObjectBinding(UMovieSceneFolder* Folder, FSequencerBindingProxy InObjectBinding);
    static bool AddChildMasterTrack(UMovieSceneFolder* Folder, UMovieSceneTrack* InMasterTrack);
    static bool AddChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToAdd);
}; // Size: 0x28
#pragma pack(pop)
