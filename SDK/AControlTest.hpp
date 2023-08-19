#pragma once
#include <cstdint>
#include "ATargetPoint.hpp"
class UUserWidget;
struct FVector;
#pragma pack(push, 1)
class AControlTest : public ATargetPoint {
public:
    FString m_subjectName; // 0x248
    float m_maxDisplacement; // 0x258
    char pad_25c[0x54];
    static AControlTest* StaticClass();
    void SetLogWidget(UUserWidget* i_logWidget);
    void SetCommandVelocity(FVector& i_velocity);
}; // Size: 0x2b0
#pragma pack(pop)
