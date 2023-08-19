#include "AActor.hpp"
#include "AWorldEventCoreMechanics.hpp"
#include "AWorldEventLocationActor.hpp"
#include "EProductionStatus.hpp"
#include "FGameplayTag.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FWorldEventDataRow.hpp"
#include "UFunction.hpp"
void AWorldEventCoreMechanics::LoadAndTeleport(FName weName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventCoreMechanics.LoadAndTeleport"));
    struct Params_LoadAndTeleport {
        FName weName; // 0x0
    }; // Size: 0x8
    Params_LoadAndTeleport params{};
    params.weName = (FName)weName;
    ProcessEvent(func, &params);
}
AWorldEventCoreMechanics* AWorldEventCoreMechanics::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventCoreMechanics");
    return (AWorldEventCoreMechanics*)res;
}
void AWorldEventCoreMechanics::ToggleMaskValue(EProductionStatus Status) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventCoreMechanics.ToggleMaskValue"));
    struct Params_ToggleMaskValue {
        EProductionStatus Status; // 0x0
    }; // Size: 0x1
    Params_ToggleMaskValue params{};
    params.Status = (EProductionStatus)Status;
    ProcessEvent(func, &params);
}
void AWorldEventCoreMechanics::OnPlayerReturned() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventCoreMechanics.OnPlayerReturned"));
    struct Params_OnPlayerReturned {
    }; // Size: 0x0
    Params_OnPlayerReturned params{};
    ProcessEvent(func, &params);
}
bool AWorldEventCoreMechanics::RowMatchesProductionFilter(FWorldEventDataRow& Row) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventCoreMechanics.RowMatchesProductionFilter"));
    struct Params_RowMatchesProductionFilter {
        FWorldEventDataRow Row; // 0x0
        bool ReturnValue; // 0x108
    }; // Size: 0x109
    Params_RowMatchesProductionFilter params{};
    params.Row = (FWorldEventDataRow)Row;
    ProcessEvent(func, &params);
    Row = params.Row;
    return (bool)params.ReturnValue;
}
TArray<FName> AWorldEventCoreMechanics::SortAlphabetically(TArray<FName> unsortedArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventCoreMechanics.SortAlphabetically"));
    struct Params_SortAlphabetically {
        TArray<FName> unsortedArray; // 0x0
        TArray<FName> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_SortAlphabetically params{};
    params.unsortedArray = (TArray<FName>)unsortedArray;
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
void AWorldEventCoreMechanics::SetTag(FGameplayTag Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventCoreMechanics.SetTag"));
    struct Params_SetTag {
        FGameplayTag Tag; // 0x0
    }; // Size: 0x8
    Params_SetTag params{};
    params.Tag = (FGameplayTag)Tag;
    ProcessEvent(func, &params);
}
void AWorldEventCoreMechanics::OnWorldEventLoaded(AWorldEventLocationActor* Location, FWorldEventDataRow& Row) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventCoreMechanics.OnWorldEventLoaded"));
    struct Params_OnWorldEventLoaded {
        AWorldEventLocationActor* Location; // 0x0
        FWorldEventDataRow Row; // 0x8
    }; // Size: 0x110
    Params_OnWorldEventLoaded params{};
    params.Location = (AWorldEventLocationActor*)Location;
    params.Row = (FWorldEventDataRow)Row;
    ProcessEvent(func, &params);
    Row = params.Row;
}
void AWorldEventCoreMechanics::OnPreviewLevelLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventCoreMechanics.OnPreviewLevelLoaded"));
    struct Params_OnPreviewLevelLoaded {
    }; // Size: 0x0
    Params_OnPreviewLevelLoaded params{};
    ProcessEvent(func, &params);
}
bool AWorldEventCoreMechanics::MaskMatchesFilter(EProductionStatus Status) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventCoreMechanics.MaskMatchesFilter"));
    struct Params_MaskMatchesFilter {
        EProductionStatus Status; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_MaskMatchesFilter params{};
    params.Status = (EProductionStatus)Status;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AWorldEventCoreMechanics::GetPositionAndRotation(int32_t Index, int32_t Count, AActor* StartLocation, int32_t rowLength, FVector axisAlignment, FVector& OutPosition, FRotator& OutRotation, int32_t Width) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventCoreMechanics.GetPositionAndRotation"));
    struct Params_GetPositionAndRotation {
        int32_t Index; // 0x0
        int32_t Count; // 0x4
        AActor* StartLocation; // 0x8
        int32_t rowLength; // 0x10
        FVector axisAlignment; // 0x14
        FVector OutPosition; // 0x20
        FRotator OutRotation; // 0x2c
        int32_t Width; // 0x38
    }; // Size: 0x3c
    Params_GetPositionAndRotation params{};
    params.Index = (int32_t)Index;
    params.Count = (int32_t)Count;
    params.StartLocation = (AActor*)StartLocation;
    params.rowLength = (int32_t)rowLength;
    params.axisAlignment = (FVector)axisAlignment;
    params.OutPosition = (FVector)OutPosition;
    params.OutRotation = (FRotator)OutRotation;
    params.Width = (int32_t)Width;
    ProcessEvent(func, &params);
    OutPosition = params.OutPosition;
    OutRotation = params.OutRotation;
}
TArray<FGameplayTag> AWorldEventCoreMechanics::GetLocationTags() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventCoreMechanics.GetLocationTags"));
    struct Params_GetLocationTags {
        TArray<FGameplayTag> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLocationTags params{};
    ProcessEvent(func, &params);
    return (TArray<FGameplayTag>)params.ReturnValue;
}
