using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneThreeFade : MonoBehaviour
{
    public GameObject vrPlayer;
    public GameObject desktopPlayer;

    public float distanceToStartFade = 10f;
    public float distanceToEndFade = 8f;
    public MeshRenderer floorToFade;
    public Skybox vrSkybox;
    public Material skyboxMaterial;
    void Update()
    {
        Transform player;

        if(vrPlayer.activeSelf) {
            player = vrPlayer.transform;
        } else {
            player = desktopPlayer.transform;
        }

        float distance = Vector3.Distance(player.position, transform.position);
        Color color = floorToFade.material.color;
        color.a = Mathf.Lerp(0f, 1f, Mathf.Clamp((distance - distanceToEndFade) / distanceToStartFade, 0f, 1f));

        if(vrPlayer.activeSelf) {
            if( distance < distanceToEndFade + 5f) {
                vrSkybox.material = skyboxMaterial;
            } else {
                vrSkybox.material = null;
            }
        }

        floorToFade.material.color = color;
    }
}
