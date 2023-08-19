#pragma once
#include <cstdint>
#include "EConversationImport.hpp"
#include "ESynchronizeMethod.hpp"
#include "FDialogueConversationReference.hpp"
#include "FStoryGraph_Conversation_CameraFilter.hpp"
#include "UTimeRig_StoryGraph.hpp"
class USceneRigProvider;
class UBaseArchitectAsset;
class UNameProvider;
class UTransformProvider;
#pragma pack(push, 1)
class UStoryGraph_Conversation : public UTimeRig_StoryGraph {
public:
    char pad_80[0x20];
    EConversationImport ArticyImport; // 0xa0
    char pad_a1[0x7];
    FDialogueConversationReference ArticyConversation; // 0xa8
    USceneRigProvider* AmbientSceneRig; // 0xb8
    USceneRigProvider* DefaultConversationSR; // 0xc0
    TArray<UBaseArchitectAsset*> LookupAssets; // 0xc8
    bool bEnableInitialFadeOut; // 0xd8
    bool bEnableInitialFadeIn; // 0xd9
    bool bEnableFinalFadeOut; // 0xda
    bool bEnableFinalFadeIn; // 0xdb
    char pad_dc[0x4];
    UNameProvider* ConversationPreset; // 0xe0
    UTransformProvider* NpcStart; // 0xe8
    UTransformProvider* PlayerFinish; // 0xf0
    TArray<FStoryGraph_Conversation_CameraFilter> CameraFilters; // 0xf8
    bool bEnableImpliedFacialEmotions; // 0x108
    ESynchronizeMethod SynchronizationMethod; // 0x109
    bool bEnableLightRig; // 0x10a
    bool bUsesSkyColors; // 0x10b
    float KeyLightColorTemperature; // 0x10c
    float RimLightColorTemperature; // 0x110
    float FillLightColorTemperature; // 0x114
    float KeyLightIntensity; // 0x118
    float RimLightIntensity; // 0x11c
    float FillLightIntensity; // 0x120
    uint32_t LastBuiltEventHash; // 0x124
    bool RebuildEdStoryGraph; // 0x128
    char pad_129[0x7];
    static UStoryGraph_Conversation* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
