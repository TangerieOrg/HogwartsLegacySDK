#include "UObject.hpp"
#include "UTextBuffer.hpp"
UTextBuffer* UTextBuffer::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.TextBuffer");
    return (UTextBuffer*)res;
}
