#include "UInterface.hpp"
#include "UNodeAndChannelMappings.hpp"
UNodeAndChannelMappings* UNodeAndChannelMappings::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.NodeAndChannelMappings");
    return (UNodeAndChannelMappings*)res;
}
