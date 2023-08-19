#pragma once
#include <cstdint>
#include "AAmbulatory_Character.hpp"
#include "EEnvQueryRunMode\Type.hpp"
#include "EStandardManagedPriority.hpp"
#include "FMultiFXHandle.hpp"
class ASocialReasoning;
class UClothSitComponent;
class UPhoenixManagedCharacter;
class UObjectStateInfo;
class UTraversalSettings;
class UObject;
class UCharacterStateInfo;
struct FQueryFinishedData;
struct FSocialResponse;
#pragma pack(push, 1)
class ABase_Character : public AAmbulatory_Character {
public:
    char pad_cc0[0x40];
    UPhoenixManagedCharacter* ManagedCharacter; // 0xd00
    FMultiFXHandle ScratchFXHandle; // 0xd08
    char pad_d10[0x10];
    UTraversalSettings* TraversalSettings; // 0xd20
    float ShoulderFixupAlpha; // 0xd28
    float FadeOutAlphaFactor; // 0xd2c
    UCharacterStateInfo* CachedCharacterStateInfo; // 0xd30
    char pad_d38[0x3d0];
    UClothSitComponent* ClothSitComponent; // 0x1108
    char pad_1110[0x140];
    float DefaultMaxHeight; // 0x1250
    char pad_1254[0x40c];
    static ABase_Character* StaticClass();
    void StartSettingTargetableByAiState(bool bTargetable, EStandardManagedPriority Priority, UObject* Provider);
    void StartSettingMaxHeightValue(float bValue, EStandardManagedPriority Priority, UObject* InInstigator);
    void StartSettingMaxHeightEnabledValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator);
    void StartSettingLODOverride(int32_t LODOverride, UObject* Provider);
    void RunEQS_FindStations(EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate);
    void RunEQS_FindSocialReasonings(EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate);
    void ReRegisterWithSignificanceManager();
    void ReleaseFocusFromScriptedBehavior(FName InIdentifyingName);
    void PlayerSighted();
    bool Nevermind();
    bool IsTargetableByAi();
    bool Goodbye();
    ASocialReasoning* GetSocialReasoning();
    UObjectStateInfo* GetObjectStateInfo();
    UCharacterStateInfo* GetCharacterStateInfo();
    void FinishSettingTargetableByAiState(EStandardManagedPriority Priority, UObject* Provider);
    void FinishSettingMaxHeightValue(EStandardManagedPriority Priority, UObject* InInstigator);
    void FinishSettingMaxHeightEnabledValue(EStandardManagedPriority Priority, UObject* InInstigator);
    void FinishSettingLODOverride(UObject* Provider);
    void ExcuseMe();
    void DisableCcd();
    void ConverseWithProxy(FSocialResponse& SocialResponse);
    void Converse(FSocialResponse& SocialResponse);
    void Chat();
    void CaptureFocusForScriptedBehavior(FName InIdentifyingName);
}; // Size: 0x1660
#pragma pack(pop)
