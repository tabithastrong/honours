using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class FirstPersonCameraController : MonoBehaviour
{
    public Transform camera;
    public Rigidbody rb;

    Vector2 movement;
    Vector2 mouseLook;

    public float moveSpeed = 1f;
    public float mouseSpeedX = 1f;
    public float mouseSpeedY = 1f;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        Cursor.lockState = CursorLockMode.Locked;
    }

    void FixedUpdate() {
        Debug.Log(movement);

        transform.position += (transform.right * movement.x  * moveSpeed * Time.fixedDeltaTime);
        transform.position += (transform.forward * movement.y  * moveSpeed * Time.fixedDeltaTime);

        transform.Rotate(new Vector3(0f, mouseLook.x * mouseSpeedX, 0f) * Time.fixedDeltaTime, Space.World);

        Vector3 rotation = camera.eulerAngles + new Vector3(mouseLook.y * -mouseSpeedY * Time.fixedDeltaTime, 0f, 0f);
        camera.rotation = Quaternion.Euler(rotation);
    }

    public void Move(InputAction.CallbackContext context) {
        movement = context.ReadValue<Vector2>();
    }
    public void MouseLook(InputAction.CallbackContext context) {
        mouseLook = context.ReadValue<Vector2>();
    }
}
