#pragma once
#include <cstdint>
#include "EDragPivot.hpp"
#include "FVector2D.hpp"
#include "UObject.hpp"
class UWidget;
struct FPointerEvent;
#pragma pack(push, 1)
class UDragDropOperation : public UObject {
public:
    FString Tag; // 0x28
    UObject* Payload; // 0x38
    UWidget* DefaultDragVisual; // 0x40
    EDragPivot Pivot; // 0x48
    char pad_49[0x3];
    FVector2D Offset; // 0x4c
    char pad_54[0x34];
    static UDragDropOperation* StaticClass();
    void Drop(FPointerEvent& PointerEvent);
    void Dragged(FPointerEvent& PointerEvent);
    void DragCancelled(FPointerEvent& PointerEvent);
}; // Size: 0x88
#pragma pack(pop)
