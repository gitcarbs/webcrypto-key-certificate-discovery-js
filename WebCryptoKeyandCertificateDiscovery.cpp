// Copyright 2013 Inventive Designers
//
//  Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**********************************************************\

  Auto-generated WebCryptoKeyandCertificateDiscovery.cpp

  This file contains the auto-generated main plugin object
  implementation for the Web Crypto Key and Certificate Discovery project

\**********************************************************/

#include "WebCryptoKeyandCertificateDiscoveryAPI.h"

#include "WebCryptoKeyandCertificateDiscovery.h"

///////////////////////////////////////////////////////////////////////////////
/// @fn WebCryptoKeyandCertificateDiscovery::StaticInitialize()
///
/// @brief  Called from PluginFactory::globalPluginInitialize()
///
/// @see FB::FactoryBase::globalPluginInitialize
///////////////////////////////////////////////////////////////////////////////
void WebCryptoKeyandCertificateDiscovery::StaticInitialize()
{
    // Place one-time initialization stuff here; As of FireBreath 1.4 this should only
    // be called once per process
}

///////////////////////////////////////////////////////////////////////////////
/// @fn WebCryptoKeyandCertificateDiscovery::StaticInitialize()
///
/// @brief  Called from PluginFactory::globalPluginDeinitialize()
///
/// @see FB::FactoryBase::globalPluginDeinitialize
///////////////////////////////////////////////////////////////////////////////
void WebCryptoKeyandCertificateDiscovery::StaticDeinitialize()
{
    // Place one-time deinitialization stuff here. As of FireBreath 1.4 this should
    // always be called just before the plugin library is unloaded
}

///////////////////////////////////////////////////////////////////////////////
/// @brief  WebCryptoKeyandCertificateDiscovery constructor.  Note that your API is not available
///         at this point, nor the window.  For best results wait to use
///         the JSAPI object until the onPluginReady method is called
///////////////////////////////////////////////////////////////////////////////
WebCryptoKeyandCertificateDiscovery::WebCryptoKeyandCertificateDiscovery()
{
}

///////////////////////////////////////////////////////////////////////////////
/// @brief  WebCryptoKeyandCertificateDiscovery destructor.
///////////////////////////////////////////////////////////////////////////////
WebCryptoKeyandCertificateDiscovery::~WebCryptoKeyandCertificateDiscovery()
{
    // This is optional, but if you reset m_api (the shared_ptr to your JSAPI
    // root object) and tell the host to free the retained JSAPI objects then
    // unless you are holding another shared_ptr reference to your JSAPI object
    // they will be released here.
    releaseRootJSAPI();
    m_host->freeRetainedObjects();
}

void WebCryptoKeyandCertificateDiscovery::onPluginReady()
{
    // When this is called, the BrowserHost is attached, the JSAPI object is
    // created, and we are ready to interact with the page and such.  The
    // PluginWindow may or may not have already fire the AttachedEvent at
    // this point.
}

void WebCryptoKeyandCertificateDiscovery::shutdown()
{
    // This will be called when it is time for the plugin to shut down;
    // any threads or anything else that may hold a shared_ptr to this
    // object should be released here so that this object can be safely
    // destroyed. This is the last point that shared_from_this and weak_ptr
    // references to this object will be valid
}

///////////////////////////////////////////////////////////////////////////////
/// @brief  Creates an instance of the JSAPI object that provides your main
///         Javascript interface.
///
/// Note that m_host is your BrowserHost and shared_ptr returns a
/// FB::PluginCorePtr, which can be used to provide a
/// boost::weak_ptr<WebCryptoKeyandCertificateDiscovery> for your JSAPI class.
///
/// Be very careful where you hold a shared_ptr to your plugin class from,
/// as it could prevent your plugin class from getting destroyed properly.
///////////////////////////////////////////////////////////////////////////////
FB::JSAPIPtr WebCryptoKeyandCertificateDiscovery::createJSAPI()
{
    // m_host is the BrowserHost
    return boost::make_shared<WebCryptoKeyandCertificateDiscoveryAPI>(FB::ptr_cast<WebCryptoKeyandCertificateDiscovery>(shared_from_this()), m_host);
}

bool WebCryptoKeyandCertificateDiscovery::onWindowAttached(FB::AttachedEvent *evt, FB::PluginWindow *)
{
    // The window is attached; act appropriately
    return false;
}

bool WebCryptoKeyandCertificateDiscovery::onWindowDetached(FB::DetachedEvent *evt, FB::PluginWindow *)
{
    // The window is about to be detached; act appropriately
    return false;
}

