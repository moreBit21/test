Scenario 1:
Project AS400 and HWIR both use the same equipment model and hence the same model from the model library.
Project HWIR decides that it needs an extra mode.
-> The projects do not use the same equipement anymore. All sub models but the logic (maybe even an extra state machine model) become common dependencies.
star tracker in AS400 will instantiate all sub models and keep its' own logic model. HWIR will get its' own logic model and instantiate all other submodels as binary dependencies
Overall goal to only extract the part which differentiates between the equipment flavours
 
Scenario 2:
Newest SimTG/SimMF is not backwards compatible (Should never occur!!!!) so c code and/or SimMF model needs to be updated.
->All models and dependencies which have to be adapted need to be branched. As long as the older SimTG versions are used, the branches and the original need to be maintained.

Scenario 3:
Newest SimAnt version is not backwards compatible making changes in the ant build file necessary.
-> Try to move the adaptions into the ant common part.



added this AND THIS

PLUS THIS