using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeSkyboxOnEnter : MonoBehaviour
{
    public Skybox skyboxDesktop;
    public Skybox skyboxVR;
    public Material materialToApply;

    void OnTriggerEnter(Collider collider) {
        skyboxDesktop.material = materialToApply;
        skyboxVR.material = materialToApply;
    }

    void OnTriggerExit(Collider collider) {
        skyboxDesktop.material = null;
        skyboxVR.material = null;
    }
}
