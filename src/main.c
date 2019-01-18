#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define VK_USE_PLATFORM_XLIB_KHR
#include <vulkan/vulkan.h>

#define fprintvari(x) fprintf(stdout,"|-- %s:%i\n",#x,x)
#define fprintvarl(x) fprintf(stdout,"|-- %s:%ld\n",#x,x)
#define fprintvarf(x) fprintf(stdout,"|-- %s:%f\n",#x,x)
#define fprintvarul(x) fprintf(stdout,"|-- %s:%lu\n",#x,x)

void printlimits(VkPhysicalDeviceLimits limits)
{
    fprintvari(limits.maxImageDimension1D);
    fprintvari(limits.maxImageDimension2D);
    fprintvari(limits.maxImageDimension3D);
    fprintvari(limits.maxImageDimensionCube);
    fprintvari(limits.maxImageArrayLayers);
    fprintvari(limits.maxTexelBufferElements);
    fprintvari(limits.maxUniformBufferRange);
    fprintvari(limits.maxStorageBufferRange);
    fprintvari(limits.maxPushConstantsSize);
    fprintvari(limits.maxMemoryAllocationCount);
    fprintvari(limits.maxSamplerAllocationCount);
    fprintvarul(limits.bufferImageGranularity);
    fprintvarul(limits.sparseAddressSpaceSize);
    fprintvari(limits.maxBoundDescriptorSets);
    fprintvari(limits.maxPerStageDescriptorSamplers);
    fprintvari(limits.maxPerStageDescriptorUniformBuffers);
    fprintvari(limits.maxPerStageDescriptorStorageBuffers);
    fprintvari(limits.maxPerStageDescriptorSampledImages);
    fprintvari(limits.maxPerStageDescriptorStorageImages);
    fprintvari(limits.maxPerStageDescriptorInputAttachments);
    fprintvari(limits.maxPerStageResources);
    fprintvari(limits.maxDescriptorSetSamplers);
    fprintvari(limits.maxDescriptorSetUniformBuffers);
    fprintvari(limits.maxDescriptorSetUniformBuffersDynamic);
    fprintvari(limits.maxDescriptorSetStorageBuffers);
    fprintvari(limits.maxDescriptorSetStorageBuffersDynamic);
    fprintvari(limits.maxDescriptorSetSampledImages);
    fprintvari(limits.maxDescriptorSetStorageImages);
    fprintvari(limits.maxDescriptorSetInputAttachments);
    fprintvari(limits.maxVertexInputAttributes);
    fprintvari(limits.maxVertexInputBindings);
    fprintvari(limits.maxVertexInputAttributeOffset);
    fprintvari(limits.maxVertexInputBindingStride);
    fprintvari(limits.maxVertexOutputComponents);
    fprintvari(limits.maxTessellationGenerationLevel);
    fprintvari(limits.maxTessellationPatchSize);
    fprintvari(limits.maxTessellationControlPerVertexInputComponents);
    fprintvari(limits.maxTessellationControlPerVertexOutputComponents);
    fprintvari(limits.maxTessellationControlPerPatchOutputComponents);
    fprintvari(limits.maxTessellationControlTotalOutputComponents);
    fprintvari(limits.maxTessellationEvaluationInputComponents);
    fprintvari(limits.maxTessellationEvaluationOutputComponents);
    fprintvari(limits.maxGeometryShaderInvocations);
    fprintvari(limits.maxGeometryInputComponents);
    fprintvari(limits.maxGeometryOutputComponents);
    fprintvari(limits.maxGeometryOutputVertices);
    fprintvari(limits.maxGeometryTotalOutputComponents);
    fprintvari(limits.maxFragmentInputComponents);
    fprintvari(limits.maxFragmentOutputAttachments);
    fprintvari(limits.maxFragmentDualSrcAttachments);
    fprintvari(limits.maxFragmentCombinedOutputResources);
    fprintvari(limits.maxComputeSharedMemorySize);
    fprintvari(limits.maxComputeWorkGroupCount[0]);
    fprintvari(limits.maxComputeWorkGroupCount[1]);
    fprintvari(limits.maxComputeWorkGroupCount[2]);
    fprintvari(limits.maxComputeWorkGroupInvocations);
    fprintvari(limits.maxComputeWorkGroupSize[0]);
    fprintvari(limits.maxComputeWorkGroupSize[1]);
    fprintvari(limits.maxComputeWorkGroupSize[2]);
    fprintvari(limits.subPixelPrecisionBits);
    fprintvari(limits.subTexelPrecisionBits);
    fprintvari(limits.mipmapPrecisionBits);
    fprintvari(limits.maxDrawIndexedIndexValue);
    fprintvari(limits.maxDrawIndirectCount);
    fprintvarf(limits.maxSamplerLodBias);
    fprintvarf(limits.maxSamplerAnisotropy);
    fprintvari(limits.maxViewports);
    fprintvari(limits.maxViewportDimensions[0]);
    fprintvari(limits.maxViewportDimensions[1]);
    fprintvarf(limits.viewportBoundsRange[0]);
    fprintvarf(limits.viewportBoundsRange[1]);
    fprintvari(limits.viewportSubPixelBits);
    fprintvarl(limits.minMemoryMapAlignment);
    fprintvarl(limits.minTexelBufferOffsetAlignment);
    fprintvarl(limits.minUniformBufferOffsetAlignment);
    fprintvarl(limits.minStorageBufferOffsetAlignment);
    fprintvari(limits.minTexelOffset);
    fprintvari(limits.maxTexelOffset);
    fprintvari(limits.minTexelGatherOffset);
    fprintvari(limits.maxTexelGatherOffset);
    fprintvarf(limits.minInterpolationOffset);
    fprintvarf(limits.maxInterpolationOffset);
    fprintvari(limits.subPixelInterpolationOffsetBits);
    fprintvari(limits.maxFramebufferWidth);
    fprintvari(limits.maxFramebufferHeight);
    fprintvari(limits.maxFramebufferLayers);
    fprintvari(limits.framebufferColorSampleCounts);
    fprintvari(limits.framebufferDepthSampleCounts);
    fprintvari(limits.framebufferStencilSampleCounts);
    fprintvari(limits.framebufferNoAttachmentsSampleCounts);
    fprintvari(limits.maxColorAttachments);
    fprintvari(limits.sampledImageColorSampleCounts);
    fprintvari(limits.sampledImageIntegerSampleCounts);
    fprintvari(limits.sampledImageDepthSampleCounts);
    fprintvari(limits.sampledImageStencilSampleCounts);
    fprintvari(limits.storageImageSampleCounts);
    fprintvari(limits.maxSampleMaskWords);
    fprintvari(limits.timestampComputeAndGraphics);
    fprintvarf(limits.timestampPeriod);
    fprintvari(limits.maxClipDistances);
    fprintvari(limits.maxCullDistances);
    fprintvari(limits.maxCombinedClipAndCullDistances);
    fprintvari(limits.discreteQueuePriorities);
    fprintvarf(limits.pointSizeRange[0]);
    fprintvarf(limits.pointSizeRange[1]);
    fprintvarf(limits.lineWidthRange[0]);
    fprintvarf(limits.lineWidthRange[1]);
    fprintvarf(limits.pointSizeGranularity);
    fprintvarf(limits.lineWidthGranularity);
    fprintvari(limits.strictLines);
    fprintvari(limits.standardSampleLocations);
    fprintvarl(limits.optimalBufferCopyOffsetAlignment);
    fprintvarl(limits.optimalBufferCopyRowPitchAlignment);
    fprintvarl(limits.nonCoherentAtomSize);
}

int main(int argc, char* argv[])
{
    fprintf(stdout, "here we go!\n");
    VkApplicationInfo applicationinfo = {0};
    applicationinfo.pApplicationName = "Fredriks fancy vulkan shit";
    applicationinfo.applicationVersion = 1;
    applicationinfo.pEngineName = "Fredriks fancy engine";
    applicationinfo.apiVersion = VK_MAKE_VERSION(1, 0, 34);
    VkInstanceCreateInfo createInfo = {0};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &applicationinfo;
    const char* extnames[2] =
    {
        VK_KHR_SURFACE_EXTENSION_NAME,
        VK_KHR_XLIB_SURFACE_EXTENSION_NAME
    };
    createInfo.ppEnabledExtensionNames = extnames;
    createInfo.enabledExtensionCount = 2;
    VkInstance instance;
    VkResult result = vkCreateInstance(&createInfo, 0, &instance);

    if(result == VK_SUCCESS)
    {
        fprintf(stdout, "VULKAN!!! run!!!\n");
    }
    else
    {
        fprintf(stderr, "something went wrong creating the instance\n");
    }

    uint32_t devicecount = UINT32_MAX;
    VkPhysicalDevice* devices = 0;
    VkPhysicalDeviceProperties* deviceproperties = 0;
    result = vkEnumeratePhysicalDevices(instance, &devicecount, 0);

    if(result == VK_SUCCESS)
    {
        fprintf(stdout, "number of devices:%i\n", devicecount);

        if(devicecount != 0)
        {
            devices = malloc(devicecount * sizeof(VkPhysicalDevice));
            deviceproperties = malloc(devicecount * sizeof(VkPhysicalDeviceProperties));
            result = vkEnumeratePhysicalDevices(instance, &devicecount, devices);

            if(result == VK_SUCCESS)
            {
                for(int i = 0; i < devicecount; i++)
                {
                    vkGetPhysicalDeviceProperties(devices[i], &deviceproperties[i]);
                    fprintf(stdout, "Device Name:    %s\n", deviceproperties[i].deviceName);
                    fprintf(stdout, "Device Type:    %d\n", deviceproperties[i].deviceType);
                    fprintf(stdout, "Driver Version: %d\n", deviceproperties[i].driverVersion);
                    printlimits(deviceproperties[i].limits);
                }
            }
            else
            {
                fprintf(stderr, "uum what enumrate didn't work the second time %i\n", result);
            }
        }
    }
    else
    {
        fprintf(stderr, "something went wrong enumrating the devices\n");
        char* displayenv = getenv("DISPLAY");

        if(displayenv == 0)
        {
            fprintf(stderr, "DISPLAY not set\n");
        }
        else
        {
            fprintf(stderr, "DISPLAY=%s\n", displayenv);
        }
    }

    if(devices)
    {
        free(devices);
    }

    if(deviceproperties)
    {
        free(deviceproperties);
    }

    vkDestroyInstance(instance, 0);
    return 0;
}
