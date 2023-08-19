#pragma once
#include <cstdint>
#include "EMirrorCtrlClickBehavior.hpp"
#include "EMirrorOperationMode.hpp"
#include "EMirrorSaveMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UMirrorToolProperties : public UInteractiveToolPropertySet {
public:
    EMirrorOperationMode OperationMode; // 0x60
    bool bCropAlongMirrorPlaneFirst; // 0x61
    bool bWeldVerticesOnMirrorPlane; // 0x62
    bool bAllowBowtieVertexCreation; // 0x63
    bool bSnapToWorldGrid; // 0x64
    EMirrorCtrlClickBehavior CtrlClickBehavior; // 0x65
    bool bButtonsOnlyChangeOrientation; // 0x66
    bool bShowPreview; // 0x67
    EMirrorSaveMode SaveMode; // 0x68
    char pad_69[0x7];
    static UMirrorToolProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
