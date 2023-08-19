#include "EGooglePADCellularDataConfirmStatus.hpp"
#include "EGooglePADDownloadStatus.hpp"
#include "EGooglePADErrorCode.hpp"
#include "EGooglePADStorageMethod.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UGooglePADFunctionLibrary.hpp"
UGooglePADFunctionLibrary* UGooglePADFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/GooglePAD.GooglePADFunctionLibrary");
    return (UGooglePADFunctionLibrary*)res;
}
EGooglePADErrorCode UGooglePADFunctionLibrary::ShowCellularDataConfirmation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation"));
    struct Params_ShowCellularDataConfirmation {
        EGooglePADErrorCode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShowCellularDataConfirmation params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EGooglePADErrorCode)params.ReturnValue;
}
EGooglePADErrorCode UGooglePADFunctionLibrary::RequestDownload(TArray<FString> AssetPacks) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GooglePAD.GooglePADFunctionLibrary.RequestDownload"));
    struct Params_RequestDownload {
        TArray<FString> AssetPacks; // 0x0
        EGooglePADErrorCode ReturnValue; // 0x10
    }; // Size: 0x11
    Params_RequestDownload params{};
    params.AssetPacks = (TArray<FString>)AssetPacks;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EGooglePADErrorCode)params.ReturnValue;
}
EGooglePADErrorCode UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus& Status) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus"));
    struct Params_GetShowCellularDataConfirmationStatus {
        EGooglePADCellularDataConfirmStatus Status; // 0x0
        EGooglePADErrorCode ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetShowCellularDataConfirmationStatus params{};
    params.Status = (EGooglePADCellularDataConfirmStatus)Status;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Status = params.Status;
    return (EGooglePADErrorCode)params.ReturnValue;
}
EGooglePADErrorCode UGooglePADFunctionLibrary::RequestInfo(TArray<FString> AssetPacks) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GooglePAD.GooglePADFunctionLibrary.RequestInfo"));
    struct Params_RequestInfo {
        TArray<FString> AssetPacks; // 0x0
        EGooglePADErrorCode ReturnValue; // 0x10
    }; // Size: 0x11
    Params_RequestInfo params{};
    params.AssetPacks = (TArray<FString>)AssetPacks;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EGooglePADErrorCode)params.ReturnValue;
}
EGooglePADErrorCode UGooglePADFunctionLibrary::RequestRemoval(FString Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GooglePAD.GooglePADFunctionLibrary.RequestRemoval"));
    struct Params_RequestRemoval {
        FString Name; // 0x0
        EGooglePADErrorCode ReturnValue; // 0x10
    }; // Size: 0x11
    Params_RequestRemoval params{};
    params.Name = (FString)Name;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EGooglePADErrorCode)params.ReturnValue;
}
void UGooglePADFunctionLibrary::ReleaseAssetPackLocation(int32_t Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation"));
    struct Params_ReleaseAssetPackLocation {
        int32_t Location; // 0x0
    }; // Size: 0x4
    Params_ReleaseAssetPackLocation params{};
    params.Location = (int32_t)Location;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGooglePADFunctionLibrary::ReleaseDownloadState(int32_t State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState"));
    struct Params_ReleaseDownloadState {
        int32_t State; // 0x0
    }; // Size: 0x4
    Params_ReleaseDownloadState params{};
    params.State = (int32_t)State;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UGooglePADFunctionLibrary::GetTotalBytesToDownload(int32_t State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload"));
    struct Params_GetTotalBytesToDownload {
        int32_t State; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetTotalBytesToDownload params{};
    params.State = (int32_t)State;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
EGooglePADStorageMethod UGooglePADFunctionLibrary::GetStorageMethod(int32_t Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GooglePAD.GooglePADFunctionLibrary.GetStorageMethod"));
    struct Params_GetStorageMethod {
        int32_t Location; // 0x0
        EGooglePADStorageMethod ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetStorageMethod params{};
    params.Location = (int32_t)Location;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EGooglePADStorageMethod)params.ReturnValue;
}
EGooglePADDownloadStatus UGooglePADFunctionLibrary::GetDownloadStatus(int32_t State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus"));
    struct Params_GetDownloadStatus {
        int32_t State; // 0x0
        EGooglePADDownloadStatus ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetDownloadStatus params{};
    params.State = (int32_t)State;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EGooglePADDownloadStatus)params.ReturnValue;
}
EGooglePADErrorCode UGooglePADFunctionLibrary::GetDownloadState(FString Name, int32_t& State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GooglePAD.GooglePADFunctionLibrary.GetDownloadState"));
    struct Params_GetDownloadState {
        FString Name; // 0x0
        int32_t State; // 0x10
        EGooglePADErrorCode ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetDownloadState params{};
    params.Name = (FString)Name;
    params.State = (int32_t)State;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    State = params.State;
    return (EGooglePADErrorCode)params.ReturnValue;
}
int32_t UGooglePADFunctionLibrary::GetBytesDownloaded(int32_t State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded"));
    struct Params_GetBytesDownloaded {
        int32_t State; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetBytesDownloaded params{};
    params.State = (int32_t)State;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FString UGooglePADFunctionLibrary::GetAssetsPath(int32_t Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GooglePAD.GooglePADFunctionLibrary.GetAssetsPath"));
    struct Params_GetAssetsPath {
        int32_t Location; // 0x0
        char pad_4[0x4];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAssetsPath params{};
    params.Location = (int32_t)Location;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
EGooglePADErrorCode UGooglePADFunctionLibrary::GetAssetPackLocation(FString Name, int32_t& Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation"));
    struct Params_GetAssetPackLocation {
        FString Name; // 0x0
        int32_t Location; // 0x10
        EGooglePADErrorCode ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetAssetPackLocation params{};
    params.Name = (FString)Name;
    params.Location = (int32_t)Location;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Location = params.Location;
    return (EGooglePADErrorCode)params.ReturnValue;
}
EGooglePADErrorCode UGooglePADFunctionLibrary::CancelDownload(TArray<FString> AssetPacks) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GooglePAD.GooglePADFunctionLibrary.CancelDownload"));
    struct Params_CancelDownload {
        TArray<FString> AssetPacks; // 0x0
        EGooglePADErrorCode ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CancelDownload params{};
    params.AssetPacks = (TArray<FString>)AssetPacks;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EGooglePADErrorCode)params.ReturnValue;
}
