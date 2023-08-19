#pragma once
#include <cstdint>
#include "EAttachmentRule.hpp"
#include "EDetachmentRule.hpp"
#include "UMovieScene3DConstraintSection.hpp"
#pragma pack(push, 1)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection {
public:
    char pad_110[0x8];
    FName AttachSocketName; // 0x118
    FName AttachComponentName; // 0x120
    EAttachmentRule AttachmentLocationRule; // 0x128
    EAttachmentRule AttachmentRotationRule; // 0x129
    EAttachmentRule AttachmentScaleRule; // 0x12a
    EDetachmentRule DetachmentLocationRule; // 0x12b
    EDetachmentRule DetachmentRotationRule; // 0x12c
    EDetachmentRule DetachmentScaleRule; // 0x12d
    char pad_12e[0x2];
    static UMovieScene3DAttachSection* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
