using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class QuoteOrb : MonoBehaviour
{
    public TMPro.TMP_Text text;
    public float fadeInSpeed = 1f;
    public GameObject vrCharacter;
    
     bool hasCharacter = false;
    void OnTriggerEnter() {
        hasCharacter = true;
    }

    void OnTriggerExit() {
        hasCharacter = false;
    }

    void Start() {
        Color c = text.faceColor;
        c.a = 0f;
        text.faceColor = c;

        vrCharacter = GameObject.FindWithTag("VRCharacter");
    }
    void Update()
    {
        if(vrCharacter != null && vrCharacter.activeSelf) {
            if(Vector3.Distance(vrCharacter.transform.position, transform.position) < 5f) {
                hasCharacter = true;
            } else {
                hasCharacter = false;
            }
        }
        Color c = text.faceColor;
        Color d = text.outlineColor;
        
        c.a = Mathf.Lerp(c.a, hasCharacter ? 1f : 0f, fadeInSpeed * Time.deltaTime);
        d.a = Mathf.Lerp(c.a, hasCharacter ? 1f : 0f, fadeInSpeed * Time.deltaTime);
        text.faceColor = c;
        text.outlineColor = d;
    }
}
