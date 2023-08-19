#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FTransform.hpp"
class USceneComponent;
class UStaticMeshComponent;
#pragma pack(push, 1)
class AControlRigGizmoActor : public AActor {
public:
    USceneComponent* ActorRootComponent; // 0x248
    UStaticMeshComponent* StaticMeshComponent; // 0x250
    uint32_t ControlRigIndex; // 0x258
    FName ControlName; // 0x25c
    FName ColorParameterName; // 0x264
    uint8_t bEnabled : 1; // 0x26c
    uint8_t bSelected : 1; // 0x26c
    uint8_t bSelectable : 1; // 0x26c
    uint8_t bHovered : 1; // 0x26c
    uint8_t pad_bitfield_26c_4 : 4;
    char pad_26d[0x3];
    static AControlRigGizmoActor* StaticClass();
    void SetSelected(bool bInSelected);
    void SetSelectable(bool bInSelectable);
    void SetHovered(bool bInHovered);
    void SetGlobalTransform(FTransform& InTransform);
    void SetEnabled(bool bInEnabled);
    void OnTransformChanged(FTransform& NewTransform);
    void OnSelectionChanged(bool bIsSelected);
    void OnManipulatingChanged(bool bIsManipulating);
    void OnHoveredChanged(bool bIsSelected);
    void OnEnabledChanged(bool bIsEnabled);
    bool IsSelectedInEditor();
    bool IsHovered();
    bool IsEnabled();
    FTransform GetGlobalTransform();
}; // Size: 0x270
#pragma pack(pop)
