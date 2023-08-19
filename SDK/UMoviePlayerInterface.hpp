#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UMoviePlayerInterface : public UInterface {
public:
    static UMoviePlayerInterface* StaticClass();
    void SetOpacity(float Opacity);
    void SetForegroundOpacity(float Opacity);
}; // Size: 0x28
#pragma pack(pop)
