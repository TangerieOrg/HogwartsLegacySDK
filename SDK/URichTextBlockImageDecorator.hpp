#pragma once
#include <cstdint>
#include "URichTextBlockDecorator.hpp"
class UDataTable;
#pragma pack(push, 1)
class URichTextBlockImageDecorator : public URichTextBlockDecorator {
public:
    UDataTable* ImageSet; // 0x28
    static URichTextBlockImageDecorator* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
