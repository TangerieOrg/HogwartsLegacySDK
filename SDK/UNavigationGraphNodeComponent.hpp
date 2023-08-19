#pragma once
#include <cstdint>
#include "FNavGraphNode.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UNavigationGraphNodeComponent : public USceneComponent {
public:
    char pad_220[0x10];
    UNavigationGraphNodeComponent* NextNodeComponent; // 0x230
    UNavigationGraphNodeComponent* PrevNodeComponent; // 0x238
    static UNavigationGraphNodeComponent* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
