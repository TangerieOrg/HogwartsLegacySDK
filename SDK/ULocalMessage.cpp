#include "ULocalMessage.hpp"
#include "UObject.hpp"
ULocalMessage* ULocalMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LocalMessage");
    return (ULocalMessage*)res;
}
