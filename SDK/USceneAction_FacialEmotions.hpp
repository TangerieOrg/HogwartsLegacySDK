#pragma once
#include <cstdint>
#include "EFacialEmotion.hpp"
#include "EManagedFacialEmotionPriority.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_FacialEmotions : public USceneRigObjectActionBase {
public:
    EFacialEmotion Emotion; // 0xa0
    EManagedFacialEmotionPriority Priority; // 0xa1
    char pad_a2[0x2];
    float BlendInTime; // 0xa4
    static USceneAction_FacialEmotions* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
