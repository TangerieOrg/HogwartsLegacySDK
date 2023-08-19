#pragma once
#include <cstdint>
#include "ESceneRigCameraAttachment.hpp"
#include "UAnimMetaData.hpp"
#pragma pack(push, 1)
class USceneRigCameraMetadata : public UAnimMetaData {
public:
    ESceneRigCameraAttachment Attachment; // 0x28
    char pad_29[0x7];
    static USceneRigCameraMetadata* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
