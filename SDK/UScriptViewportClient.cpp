#include "UObject.hpp"
#include "UScriptViewportClient.hpp"
UScriptViewportClient* UScriptViewportClient::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ScriptViewportClient");
    return (UScriptViewportClient*)res;
}
