#pragma once
#include <cstdint>
#include "AGizmoActor.hpp"
class UGizmoLineHandleComponent;
#pragma pack(push, 1)
class AIntervalGizmoActor : public AGizmoActor {
public:
    UGizmoLineHandleComponent* UpIntervalComponent; // 0x248
    UGizmoLineHandleComponent* DownIntervalComponent; // 0x250
    UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x258
    static AIntervalGizmoActor* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
