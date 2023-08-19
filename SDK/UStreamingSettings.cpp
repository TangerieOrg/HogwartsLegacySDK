#include "UDeveloperSettings.hpp"
#include "UStreamingSettings.hpp"
UStreamingSettings* UStreamingSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.StreamingSettings");
    return (UStreamingSettings*)res;
}
