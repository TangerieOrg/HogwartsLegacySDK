#include "FColor.hpp"
#include "FSequencerBindingProxy.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMovieSceneFolder.hpp"
#include "UMovieSceneFolderExtensions.hpp"
#include "UMovieSceneTrack.hpp"
UMovieSceneFolderExtensions* UMovieSceneFolderExtensions::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneFolderExtensions");
    return (UMovieSceneFolderExtensions*)res;
}
FColor UMovieSceneFolderExtensions::GetFolderColor(UMovieSceneFolder* Folder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderColor"));
    struct Params_GetFolderColor {
        UMovieSceneFolder* Folder; // 0x0
        FColor ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetFolderColor params{};
    params.Folder = (UMovieSceneFolder*)Folder;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FColor)params.ReturnValue;
}
bool UMovieSceneFolderExtensions::RemoveChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToRemove) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder"));
    struct Params_RemoveChildFolder {
        UMovieSceneFolder* TargetFolder; // 0x0
        UMovieSceneFolder* FolderToRemove; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_RemoveChildFolder params{};
    params.TargetFolder = (UMovieSceneFolder*)TargetFolder;
    params.FolderToRemove = (UMovieSceneFolder*)FolderToRemove;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMovieSceneFolderExtensions::SetFolderName(UMovieSceneFolder* Folder, FName InFolderName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneFolderExtensions.SetFolderName"));
    struct Params_SetFolderName {
        UMovieSceneFolder* Folder; // 0x0
        FName InFolderName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetFolderName params{};
    params.Folder = (UMovieSceneFolder*)Folder;
    params.InFolderName = (FName)InFolderName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMovieSceneFolderExtensions::SetFolderColor(UMovieSceneFolder* Folder, FColor InFolderColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneFolderExtensions.SetFolderColor"));
    struct Params_SetFolderColor {
        UMovieSceneFolder* Folder; // 0x0
        FColor InFolderColor; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_SetFolderColor params{};
    params.Folder = (UMovieSceneFolder*)Folder;
    params.InFolderColor = (FColor)InFolderColor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMovieSceneFolderExtensions::RemoveChildMasterTrack(UMovieSceneFolder* Folder, UMovieSceneTrack* InMasterTrack) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack"));
    struct Params_RemoveChildMasterTrack {
        UMovieSceneFolder* Folder; // 0x0
        UMovieSceneTrack* InMasterTrack; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_RemoveChildMasterTrack params{};
    params.Folder = (UMovieSceneFolder*)Folder;
    params.InMasterTrack = (UMovieSceneTrack*)InMasterTrack;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMovieSceneFolderExtensions::RemoveChildObjectBinding(UMovieSceneFolder* Folder, FSequencerBindingProxy InObjectBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding"));
    struct Params_RemoveChildObjectBinding {
        UMovieSceneFolder* Folder; // 0x0
        FSequencerBindingProxy InObjectBinding; // 0x8
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_RemoveChildObjectBinding params{};
    params.Folder = (UMovieSceneFolder*)Folder;
    params.InObjectBinding = (FSequencerBindingProxy)InObjectBinding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UMovieSceneFolderExtensions::GetFolderName(UMovieSceneFolder* Folder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderName"));
    struct Params_GetFolderName {
        UMovieSceneFolder* Folder; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetFolderName params{};
    params.Folder = (UMovieSceneFolder*)Folder;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
TArray<FSequencerBindingProxy> UMovieSceneFolderExtensions::GetChildObjectBindings(UMovieSceneFolder* Folder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings"));
    struct Params_GetChildObjectBindings {
        UMovieSceneFolder* Folder; // 0x0
        TArray<FSequencerBindingProxy> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetChildObjectBindings params{};
    params.Folder = (UMovieSceneFolder*)Folder;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FSequencerBindingProxy>)params.ReturnValue;
}
TArray<UMovieSceneTrack*> UMovieSceneFolderExtensions::GetChildMasterTracks(UMovieSceneFolder* Folder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks"));
    struct Params_GetChildMasterTracks {
        UMovieSceneFolder* Folder; // 0x0
        TArray<UMovieSceneTrack*> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetChildMasterTracks params{};
    params.Folder = (UMovieSceneFolder*)Folder;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UMovieSceneTrack*>)params.ReturnValue;
}
TArray<UMovieSceneFolder*> UMovieSceneFolderExtensions::GetChildFolders(UMovieSceneFolder* Folder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildFolders"));
    struct Params_GetChildFolders {
        UMovieSceneFolder* Folder; // 0x0
        TArray<UMovieSceneFolder*> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetChildFolders params{};
    params.Folder = (UMovieSceneFolder*)Folder;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UMovieSceneFolder*>)params.ReturnValue;
}
bool UMovieSceneFolderExtensions::AddChildObjectBinding(UMovieSceneFolder* Folder, FSequencerBindingProxy InObjectBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding"));
    struct Params_AddChildObjectBinding {
        UMovieSceneFolder* Folder; // 0x0
        FSequencerBindingProxy InObjectBinding; // 0x8
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_AddChildObjectBinding params{};
    params.Folder = (UMovieSceneFolder*)Folder;
    params.InObjectBinding = (FSequencerBindingProxy)InObjectBinding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMovieSceneFolderExtensions::AddChildMasterTrack(UMovieSceneFolder* Folder, UMovieSceneTrack* InMasterTrack) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack"));
    struct Params_AddChildMasterTrack {
        UMovieSceneFolder* Folder; // 0x0
        UMovieSceneTrack* InMasterTrack; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_AddChildMasterTrack params{};
    params.Folder = (UMovieSceneFolder*)Folder;
    params.InMasterTrack = (UMovieSceneTrack*)InMasterTrack;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMovieSceneFolderExtensions::AddChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToAdd) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildFolder"));
    struct Params_AddChildFolder {
        UMovieSceneFolder* TargetFolder; // 0x0
        UMovieSceneFolder* FolderToAdd; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_AddChildFolder params{};
    params.TargetFolder = (UMovieSceneFolder*)TargetFolder;
    params.FolderToAdd = (UMovieSceneFolder*)FolderToAdd;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
