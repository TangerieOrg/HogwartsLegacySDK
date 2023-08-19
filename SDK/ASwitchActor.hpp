#pragma once
#include <cstdint>
#include "AActor.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ASwitchActor : public AActor {
public:
    char pad_248[0x18];
    USceneComponent* SceneComponent; // 0x260
    int32_t LastSelectedOption; // 0x268
    char pad_26c[0x4];
    static ASwitchActor* StaticClass();
    void SelectOption(int32_t OptionIndex);
    int32_t GetSelectedOption();
    TArray<AActor*> GetOptions();
}; // Size: 0x270
#pragma pack(pop)
