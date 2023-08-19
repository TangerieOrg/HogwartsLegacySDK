#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UMovieSceneCompiledDataManager : public UObject {
public:
    char pad_28[0x208];
    static UMovieSceneCompiledDataManager* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
