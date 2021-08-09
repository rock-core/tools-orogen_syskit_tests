/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "FatalErrorAfterExceptionAndDelay.hpp"

using namespace orogen_syskit_tests;

FatalErrorAfterExceptionAndDelay::FatalErrorAfterExceptionAndDelay(std::string const& name)
    : FatalErrorAfterExceptionAndDelayBase(name)
{
}

FatalErrorAfterExceptionAndDelay::~FatalErrorAfterExceptionAndDelay()
{
}



/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See FatalErrorAfterExceptionAndDelay.hpp for more detailed
// documentation about them.

bool FatalErrorAfterExceptionAndDelay::configureHook()
{
    if (! FatalErrorAfterExceptionAndDelayBase::configureHook())
        return false;
    return true;
}
bool FatalErrorAfterExceptionAndDelay::startHook()
{
    if (! FatalErrorAfterExceptionAndDelayBase::startHook())
        return false;
    return true;
}
void FatalErrorAfterExceptionAndDelay::updateHook()
{
    exception();
    FatalErrorAfterExceptionAndDelayBase::updateHook();
}
void FatalErrorAfterExceptionAndDelay::errorHook()
{
    FatalErrorAfterExceptionAndDelayBase::errorHook();
}
void FatalErrorAfterExceptionAndDelay::stopHook()
{
    usleep(1000000UL);
    throw std::runtime_error("please transition to FATAL");
    FatalErrorAfterExceptionAndDelayBase::stopHook();
}
void FatalErrorAfterExceptionAndDelay::cleanupHook()
{
    FatalErrorAfterExceptionAndDelayBase::cleanupHook();
}
