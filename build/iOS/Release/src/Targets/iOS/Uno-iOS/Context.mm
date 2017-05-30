#include <Uno-iOS/Context.h>
#include <Uno-iOS/Uno-iOS.h>
#include <uObjC.Foreign.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.iOS.Application.h>
#include <Uno.Platform.EventSou-afb2ad40.h>


@interface uContext()
{
@private
    uRuntime* _uno;
}
@end

@implementation uContext

struct NotificationSelector
{
    NSString* name;
    SEL selector;
};

const static NotificationSelector _notifications[] = {
    { UIApplicationDidFinishLaunchingNotification, @selector(applicationDidFinishLaunching:) },
    { UIApplicationWillEnterForegroundNotification, @selector(applicationWillEnterForeground:) },
    { UIApplicationDidBecomeActiveNotification, @selector(applicationDidBecomeActive:) },
    { UIApplicationWillResignActiveNotification, @selector(applicationWillResignActive:) },
    { UIApplicationDidEnterBackgroundNotification, @selector(applicationDidEnterBackground:) },
    { UIApplicationWillTerminateNotification, @selector(applicationWillTerminate:) },
    { UIApplicationDidReceiveMemoryWarningNotification, @selector(applicationDidReceiveMemoryWarning:) },
};

- (instancetype)init
{
    if (self = [super init])
    {
        _uno = new uRuntime();

        NSNotificationCenter* nc = [NSNotificationCenter defaultCenter];

        int num_notifications = sizeof(_notifications) / sizeof(_notifications[0]);

        for (int i = 0; i < num_notifications; ++i)
        {
            [nc addObserver:self
                selector:_notifications[i].selector
                name:_notifications[i].name
                object:nil];
        }
    }
    return self;
}

- (void)dealloc
{
    NSNotificationCenter* nc = [NSNotificationCenter defaultCenter];

    int num_notifications = sizeof(_notifications) / sizeof(_notifications[0]);

    for (int i = 0; i < num_notifications; ++i)
    {
        [nc removeObserver:self
            name:_notifications[i].name
            object:nil];
    }

    delete _uno;
}

- (BOOL)application:(UIApplication *)application willFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::Start(); }();
    ::g::Uno::Platform::iOS::Application::LaunchOptions(::g::ObjC::Object::Create(launchOptions));
    return YES;
}

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::EventSources::InterAppInvoke::OnReceivedURI(::uObjC::UnoString([url absoluteString])); }();
    return YES;
}

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary*)options
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::EventSources::InterAppInvoke::OnReceivedURI(::uObjC::UnoString([url absoluteString])); }();
    return YES;
}

- (void)applicationDidFinishLaunching:(NSNotification*)notification
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::EnterForeground(); }();
    
}

- (void)applicationWillEnterForeground:(NSNotification*)notification
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::EnterForeground(); }();
}

- (void)applicationDidBecomeActive:(NSNotification*)notification
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::EnterInteractive(); }();
}

- (void)applicationWillResignActive:(NSNotification*)notification
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::ExitInteractive(); }();
}

- (void)applicationDidEnterBackground:(NSNotification*)notification
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::EnterBackground(); }();
}

- (void)applicationWillTerminate:(NSNotification*)notification
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::Terminate(); }();
}

- (void)applicationDidReceiveMemoryWarning:(NSNotification*)notification
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::OnReceivedLowMemoryWarning(); }();
}

@end
