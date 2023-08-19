#include "FFrameRate.hpp"
#include "USystemTimeTimecodeProvider.hpp"
#include "UTimecodeProvider.hpp"
USystemTimeTimecodeProvider* USystemTimeTimecodeProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SystemTimeTimecodeProvider");
    return (USystemTimeTimecodeProvider*)res;
}
