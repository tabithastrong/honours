using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class XRChecker : MonoBehaviour
{
    public GameObject vrController;
    public GameObject firstPersonController;

    void Start()
    {
        if(XRSettings.isDeviceActive) {
            vrController.SetActive(true);
            firstPersonController.SetActive(false);
        } else {
            vrController.SetActive(false);
            firstPersonController.SetActive(true);
        }
    }
}
