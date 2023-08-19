#include "UEngineMessage.hpp"
#include "ULocalMessage.hpp"
UEngineMessage* UEngineMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.EngineMessage");
    return (UEngineMessage*)res;
}
