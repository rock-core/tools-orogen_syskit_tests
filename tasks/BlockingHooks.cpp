/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "BlockingHooks.hpp"
#include <base-logging/Logging.hpp>

using namespace orogen_syskit_tests;

BlockingHooks::BlockingHooks(std::string const& name)
    : BlockingHooksBase(name)
{
}

BlockingHooks::~BlockingHooks()
{
}



/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See BlockingHooks.hpp for more detailed
// documentation about them.

bool BlockingHooks::configureHook()
{
    if (! BlockingHooksBase::configureHook())
        return false;

    doRequiredSleep("configure");
    return true;
}
bool BlockingHooks::startHook()
{
    if (! BlockingHooksBase::startHook())
        return false;
    doRequiredSleep("start");
    return true;
}
void BlockingHooks::updateHook()
{
    doRequiredSleep("update");
    if (_hook.get() == "exception") {
        exception();
    }
    BlockingHooksBase::updateHook();
}
void BlockingHooks::errorHook()
{
    BlockingHooksBase::errorHook();
}
void BlockingHooks::stopHook()
{
    doRequiredSleep("stop");
    BlockingHooksBase::stopHook();
}
void BlockingHooks::exceptionHook()
{
    doRequiredSleep("exception");
    BlockingHooksBase::exceptionHook();
}
void BlockingHooks::cleanupHook()
{
    doRequiredSleep("cleanup");
    BlockingHooksBase::cleanupHook();
}

void BlockingHooks::doRequiredSleep(std::string const& currentHookName) {
    if (currentHookName == _hook.get()) {
        LOG_ERROR_S << "Sleeping in " << currentHookName;
        _sleep_start.write(true);
        usleep(_time.get() * 1000000UL);
        LOG_ERROR_S << "Done sleeping" << currentHookName;
    }
    else {
        LOG_ERROR_S << "Not sleeping in " << currentHookName;
    }
}
