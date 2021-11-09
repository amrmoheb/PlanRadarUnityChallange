using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DownloadedModelHandler : MonoBehaviour
{
      public Material MobileMat ;
     Texture2D tex2d;
    MeshRenderer[] childrenMeshes;
    public string URL = "https://raw.githubusercontent.com/KhronosGroup/glTF-Sample-Models/master/2.0/Duck/glTF/Duck.gltf";
    //"https://raw.githubusercontent.com/nandiniiys/3D-Visualization-of-a-Building/main/McCormackBuildingFiles/Mck04/Mck04.gltf";
    // Start is called before the first frame update
    async void Start()
    {
        // First step: load glTF
        var gltf = new GLTFast.GltfImport();
        var success = await gltf.Load(URL);

        if (success)
        {
            // Here you can customize the post-loading behavior

            // Get the first material
            var meshes = gltf.GetMeshes();
            tex2d = gltf.GetTexture();
            // Debug.LogFormat("The first material is called {0}", material.name);

            // Instantiate the glTF's main scene
            gltf.InstantiateMainScene(this.transform);
            ChangeMaterial(MobileMat);
            UIManger.shared.StopSpinerIndecator();
        }
        else
        {
            Debug.LogError("Loading glTF failed!");
        }
    }

    // Update is called once per frame
   
    public void ChangeMaterial(  Material newMat)
    {
        newMat.mainTexture = tex2d;
        
        childrenMeshes = GetComponentsInChildren<MeshRenderer> ();

        foreach (MeshRenderer rend in childrenMeshes)
        {
            var mats = new Material[rend.materials.Length];
            for (var j = 0; j < rend.materials.Length; j++)
            {
                mats[j] = newMat;
            }
            rend.materials = mats;
        }
    }
}
