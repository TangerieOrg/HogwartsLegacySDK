#include "FSceneRigParameters.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UObject.hpp"
#include "UStoryDirector_Interface.hpp"
void UStoryDirector_Interface::StoryEnded(UObject* inSceneRigStory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StoryDirector_Interface.StoryEnded"));
    struct Params_StoryEnded {
        UObject* inSceneRigStory; // 0x0
    }; // Size: 0x8
    Params_StoryEnded params{};
    params.inSceneRigStory = (UObject*)inSceneRigStory;
    ProcessEvent(func, &params);
}
UStoryDirector_Interface* UStoryDirector_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StoryDirector_Interface");
    return (UStoryDirector_Interface*)res;
}
void UStoryDirector_Interface::SetupStorySceneRigProp(FSceneRigParameters& outParameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StoryDirector_Interface.SetupStorySceneRigProp"));
    struct Params_SetupStorySceneRigProp {
        FSceneRigParameters outParameters; // 0x0
    }; // Size: 0x88
    Params_SetupStorySceneRigProp params{};
    params.outParameters = (FSceneRigParameters)outParameters;
    ProcessEvent(func, &params);
    outParameters = params.outParameters;
}
void UStoryDirector_Interface::ParticipantFinishedEnter(UObject* inParticipant, int32_t InConnectionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StoryDirector_Interface.ParticipantFinishedEnter"));
    struct Params_ParticipantFinishedEnter {
        UObject* inParticipant; // 0x0
        int32_t InConnectionIndex; // 0x8
    }; // Size: 0xc
    Params_ParticipantFinishedEnter params{};
    params.inParticipant = (UObject*)inParticipant;
    params.InConnectionIndex = (int32_t)InConnectionIndex;
    ProcessEvent(func, &params);
}
void UStoryDirector_Interface::SetupStorySceneRigConnection(FSceneRigParameters& outParameters, int32_t InConnectionIndex, int32_t InChannel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StoryDirector_Interface.SetupStorySceneRigConnection"));
    struct Params_SetupStorySceneRigConnection {
        FSceneRigParameters outParameters; // 0x0
        int32_t InConnectionIndex; // 0x88
        int32_t InChannel; // 0x8c
    }; // Size: 0x90
    Params_SetupStorySceneRigConnection params{};
    params.outParameters = (FSceneRigParameters)outParameters;
    params.InConnectionIndex = (int32_t)InConnectionIndex;
    params.InChannel = (int32_t)InChannel;
    ProcessEvent(func, &params);
    outParameters = params.outParameters;
}
void UStoryDirector_Interface::ParticipantFinishedExit(UObject* inParticipant, int32_t InConnectionIndex, FName inSocialSemantic, bool inTestForMovementMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StoryDirector_Interface.ParticipantFinishedExit"));
    struct Params_ParticipantFinishedExit {
        UObject* inParticipant; // 0x0
        int32_t InConnectionIndex; // 0x8
        FName inSocialSemantic; // 0xc
        bool inTestForMovementMode; // 0x14
    }; // Size: 0x15
    Params_ParticipantFinishedExit params{};
    params.inParticipant = (UObject*)inParticipant;
    params.InConnectionIndex = (int32_t)InConnectionIndex;
    params.inSocialSemantic = (FName)inSocialSemantic;
    params.inTestForMovementMode = (bool)inTestForMovementMode;
    ProcessEvent(func, &params);
}
void UStoryDirector_Interface::NotifyAllStoriesOfEvent(FName InEventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StoryDirector_Interface.NotifyAllStoriesOfEvent"));
    struct Params_NotifyAllStoriesOfEvent {
        FName InEventName; // 0x0
    }; // Size: 0x8
    Params_NotifyAllStoriesOfEvent params{};
    params.InEventName = (FName)InEventName;
    ProcessEvent(func, &params);
}
