#pragma once
#include <cstdint>
#include "AActor.hpp"
class USceneRigPlayer;
class USceneRig;
class USceneRigStageParameterBlock;
#pragma pack(push, 1)
class ADragonEscapeScene : public AActor {
public:
    char pad_248[0x8];
    USceneRigPlayer* m_SceneRigPlayer; // 0x250
    USceneRig* m_DragonEscapeSceneRig; // 0x258
    USceneRigStageParameterBlock* ParameterBlock; // 0x260
    AActor* AIDragon; // 0x268
    AActor* DragonPlatform; // 0x270
    static ADragonEscapeScene* StaticClass();
    void QueueFinalRelease();
    void PlaySceneRig();
    void PlayQueuedFinalRelease();
}; // Size: 0x278
#pragma pack(pop)
