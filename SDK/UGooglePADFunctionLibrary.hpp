#pragma once
#include <cstdint>
#include "EGooglePADCellularDataConfirmStatus.hpp"
#include "EGooglePADDownloadStatus.hpp"
#include "EGooglePADErrorCode.hpp"
#include "EGooglePADStorageMethod.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UGooglePADFunctionLibrary* StaticClass();
    static EGooglePADErrorCode ShowCellularDataConfirmation();
    static EGooglePADErrorCode RequestRemoval(FString Name);
    static EGooglePADErrorCode RequestInfo(TArray<FString> AssetPacks);
    static EGooglePADErrorCode RequestDownload(TArray<FString> AssetPacks);
    static void ReleaseDownloadState(int32_t State);
    static void ReleaseAssetPackLocation(int32_t Location);
    static int32_t GetTotalBytesToDownload(int32_t State);
    static EGooglePADStorageMethod GetStorageMethod(int32_t Location);
    static EGooglePADErrorCode GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus& Status);
    static EGooglePADDownloadStatus GetDownloadStatus(int32_t State);
    static EGooglePADErrorCode GetDownloadState(FString Name, int32_t& State);
    static int32_t GetBytesDownloaded(int32_t State);
    static FString GetAssetsPath(int32_t Location);
    static EGooglePADErrorCode GetAssetPackLocation(FString Name, int32_t& Location);
    static EGooglePADErrorCode CancelDownload(TArray<FString> AssetPacks);
}; // Size: 0x28
#pragma pack(pop)
